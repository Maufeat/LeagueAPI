#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct ClubsSummoner { 
    uint64_t summonerId;
    std::string displayName;
    int32_t profileIconId; 
  };
  inline void to_json(json& j, const ClubsSummoner& v) {
    j["summonerId"] = v.summonerId; 
    j["displayName"] = v.displayName; 
    j["profileIconId"] = v.profileIconId; 
  }
  inline void from_json(const json& j, ClubsSummoner& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.displayName = j.at("displayName").get<std::string>(); 
    v.profileIconId = j.at("profileIconId").get<int32_t>(); 
  }
}