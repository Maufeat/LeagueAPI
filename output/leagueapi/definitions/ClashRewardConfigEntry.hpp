#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/ClashRewardOutput.hpp>"

namespace leagueapi {
  struct ClashRewardConfigEntry { /**/ 
    std::string key;/**/
    std::vector<ClashRewardOutput> vals;/**/
  };
  static void to_json(json& j, const ClashRewardConfigEntry& v) { 
    j["key"] = v.key;
    j["vals"] = v.vals;
  }
  static void from_json(const json& j, ClashRewardConfigEntry& v) { 
    v.key = j.at("key").get<std::string>(); 
    v.vals = j.at("vals").get<std::vector<ClashRewardOutput>>(); 
  }
} 