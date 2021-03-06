import fs from "fs";
import nunjucks from "nunjucks";
import pkg from "../../package.json";

import { getLunarVkVersion } from "../utils";

let ast = null;

const GYP_TEMPLATE = fs.readFileSync(`${pkg.config.TEMPLATE_DIR}/binding-gyp.njk`, "utf-8");

nunjucks.configure({ autoescape: true });

export default function(astReference, VK_VERSION, VK_INCLUDES) {
  ast = astReference;
  let vars = {
    VK_VERSION: getLunarVkVersion(VK_VERSION),
    VK_INCLUDES: VK_INCLUDES.join(`,\n`)
  };
  let out = {
    gyp: null
  };
  // binding.gyp
  {
    let template = GYP_TEMPLATE;
    let output = nunjucks.renderString(template, vars);
    out.gyp = output;
  }
  return out;
};
