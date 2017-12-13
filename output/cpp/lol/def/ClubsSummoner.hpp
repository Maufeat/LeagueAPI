#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct ClubsSummoner { 
    std::string displayName;
    int32_t profileIconId;
    uint64_t summonerId; 
  };
  void to_json(json& j, const ClubsSummoner& v) {
  j["displayName"] = v.displayName; 
  j["profileIconId"] = v.profileIconId; 
  j["summonerId"] = v.summonerId; 
  }
  void from_json(const json& j, ClubsSummoner& v) {
  v.displayName = j.at("displayName").get<std::string>(); 
  v.profileIconId = j.at("profileIconId").get<int32_t>(); 
  v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}