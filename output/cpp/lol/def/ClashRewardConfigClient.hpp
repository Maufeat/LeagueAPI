#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/ClashRewardConfigEntry.hpp>
#include <lol/def/ClashRewardKeyType.hpp>
namespace lol {
  struct ClashRewardConfigClient { 
    bool grantToSub;
    std::vector<ClashRewardConfigEntry> entries;
    std::vector<ClashRewardKeyType> keyDef;
    std::string name; 
  };
  void to_json(json& j, const ClashRewardConfigClient& v) {
  j["grantToSub"] = v.grantToSub; 
  j["entries"] = v.entries; 
  j["keyDef"] = v.keyDef; 
  j["name"] = v.name; 
  }
  void from_json(const json& j, ClashRewardConfigClient& v) {
  v.grantToSub = j.at("grantToSub").get<bool>(); 
  v.entries = j.at("entries").get<std::vector<ClashRewardConfigEntry>>(); 
  v.keyDef = j.at("keyDef").get<std::vector<ClashRewardKeyType>>(); 
  v.name = j.at("name").get<std::string>(); 
  }
}