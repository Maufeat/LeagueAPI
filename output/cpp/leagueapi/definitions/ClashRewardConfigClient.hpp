#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/ClashRewardKeyType.hpp>
#include <leagueapi/definitions/ClashRewardConfigEntry.hpp>

namespace leagueapi {
  struct ClashRewardConfigClient { /**/ 
    bool grantToSub;/**/
    std::vector<ClashRewardConfigEntry> entries;/**/
    std::vector<ClashRewardKeyType> keyDef;/**/
    std::string name;/**/
  };
  static void to_json(json& j, const ClashRewardConfigClient& v) { 
    j["grantToSub"] = v.grantToSub;
    j["entries"] = v.entries;
    j["keyDef"] = v.keyDef;
    j["name"] = v.name;
  }
  static void from_json(const json& j, ClashRewardConfigClient& v) { 
    v.grantToSub = j.at("grantToSub").get<bool>(); 
    v.entries = j.at("entries").get<std::vector<ClashRewardConfigEntry>>(); 
    v.keyDef = j.at("keyDef").get<std::vector<ClashRewardKeyType>>(); 
    v.name = j.at("name").get<std::string>(); 
  }
} 