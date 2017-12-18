#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/ClashRewardKeyType.hpp>
#include <lol/def/ClashRewardConfigEntry.hpp>
namespace lol {
  struct ClashRewardConfigClient { 
    std::string name;
    std::vector<ClashRewardConfigEntry> entries;
    bool grantToSub;
    std::vector<ClashRewardKeyType> keyDef; 
  };
  inline void to_json(json& j, const ClashRewardConfigClient& v) {
    j["name"] = v.name; 
    j["entries"] = v.entries; 
    j["grantToSub"] = v.grantToSub; 
    j["keyDef"] = v.keyDef; 
  }
  inline void from_json(const json& j, ClashRewardConfigClient& v) {
    v.name = j.at("name").get<std::string>(); 
    v.entries = j.at("entries").get<std::vector<ClashRewardConfigEntry>>(); 
    v.grantToSub = j.at("grantToSub").get<bool>(); 
    v.keyDef = j.at("keyDef").get<std::vector<ClashRewardKeyType>>(); 
  }
}