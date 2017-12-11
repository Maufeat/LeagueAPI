#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct RecofrienderNetworkConfig { /**/ 
    bool enabled;/**/
    std::string linkUrlTemplate;/**/
    std::string unlinkUrlTemplate;/**/
    std::string name;/**/
  };
  static void to_json(json& j, const RecofrienderNetworkConfig& v) { 
    j["enabled"] = v.enabled;
    j["linkUrlTemplate"] = v.linkUrlTemplate;
    j["unlinkUrlTemplate"] = v.unlinkUrlTemplate;
    j["name"] = v.name;
  }
  static void from_json(const json& j, RecofrienderNetworkConfig& v) { 
    v.enabled = j.at("enabled").get<bool>(); 
    v.linkUrlTemplate = j.at("linkUrlTemplate").get<std::string>(); 
    v.unlinkUrlTemplate = j.at("unlinkUrlTemplate").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
  }
} 