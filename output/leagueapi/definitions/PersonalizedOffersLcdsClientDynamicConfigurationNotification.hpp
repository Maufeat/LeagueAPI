#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct PersonalizedOffersLcdsClientDynamicConfigurationNotification { /**/ 
    std::string configs;/**/
    bool delta;/**/
  };
  static void to_json(json& j, const PersonalizedOffersLcdsClientDynamicConfigurationNotification& v) { 
    j["configs"] = v.configs;
    j["delta"] = v.delta;
  }
  static void from_json(const json& j, PersonalizedOffersLcdsClientDynamicConfigurationNotification& v) { 
    v.configs = j.at("configs").get<std::string>(); 
    v.delta = j.at("delta").get<bool>(); 
  }
} 