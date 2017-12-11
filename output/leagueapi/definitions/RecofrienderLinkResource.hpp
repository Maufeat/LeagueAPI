#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct RecofrienderLinkResource { /**/ 
    std::string reason;/**/
    bool linked;/**/
    std::string name;/**/
  };
  static void to_json(json& j, const RecofrienderLinkResource& v) { 
    j["reason"] = v.reason;
    j["linked"] = v.linked;
    j["name"] = v.name;
  }
  static void from_json(const json& j, RecofrienderLinkResource& v) { 
    v.reason = j.at("reason").get<std::string>(); 
    v.linked = j.at("linked").get<bool>(); 
    v.name = j.at("name").get<std::string>(); 
  }
} 