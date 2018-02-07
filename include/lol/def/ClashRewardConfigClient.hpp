#pragma once
#include "../base_def.hpp" 
#include "ClashRewardKeyType.hpp"
#include "ClashRewardConfigEntry.hpp"
namespace lol {
  struct ClashRewardConfigClient { 
    std::string name;
    bool grantToSub;
    std::vector<ClashRewardKeyType> keyDef;
    std::vector<ClashRewardConfigEntry> entries; 
  };
  inline void to_json(json& j, const ClashRewardConfigClient& v) {
    j["name"] = v.name; 
    j["grantToSub"] = v.grantToSub; 
    j["keyDef"] = v.keyDef; 
    j["entries"] = v.entries; 
  }
  inline void from_json(const json& j, ClashRewardConfigClient& v) {
    v.name = j.at("name").get<std::string>(); 
    v.grantToSub = j.at("grantToSub").get<bool>(); 
    v.keyDef = j.at("keyDef").get<std::vector<ClashRewardKeyType>>(); 
    v.entries = j.at("entries").get<std::vector<ClashRewardConfigEntry>>(); 
  }
}