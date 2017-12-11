#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolPerksGetResultFromServiceDTO { /**/ 
    std::string error;/**/
    std::string result;/**/
  };
  static void to_json(json& j, const LolPerksGetResultFromServiceDTO& v) { 
    j["error"] = v.error;
    j["result"] = v.result;
  }
  static void from_json(const json& j, LolPerksGetResultFromServiceDTO& v) { 
    v.error = j.at("error").get<std::string>(); 
    v.result = j.at("result").get<std::string>(); 
  }
} 