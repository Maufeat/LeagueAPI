#pragma once
#include "../base_def.hpp" 
#include "ClashRewardKeyType.hpp"
#include "ClashRewardConfigEntry.hpp"
namespace lol {
  struct ClashRewardConfigClient { 
    std::vector<ClashRewardConfigEntry> entries;
    bool grantToSub;
    std::vector<ClashRewardKeyType> keyDef;
    std::string name; 
  };
  inline void to_json(json& j, const ClashRewardConfigClient& v) {
    j["entries"] = v.entries; 
    j["grantToSub"] = v.grantToSub; 
    j["keyDef"] = v.keyDef; 
    j["name"] = v.name; 
  }
  inline void from_json(const json& j, ClashRewardConfigClient& v) {
    v.entries = j.at("entries").get<std::vector<ClashRewardConfigEntry>>(); 
    v.grantToSub = j.at("grantToSub").get<bool>(); 
    v.keyDef = j.at("keyDef").get<std::vector<ClashRewardKeyType>>(); 
    v.name = j.at("name").get<std::string>(); 
  }
}