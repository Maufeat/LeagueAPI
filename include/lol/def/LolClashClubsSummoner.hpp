#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolClashClubsSummoner { 
    uint64_t summonerId;
    std::string displayName;
    int32_t profileIconId; 
  };
  inline void to_json(json& j, const LolClashClubsSummoner& v) {
    j["summonerId"] = v.summonerId; 
    j["displayName"] = v.displayName; 
    j["profileIconId"] = v.profileIconId; 
  }
  inline void from_json(const json& j, LolClashClubsSummoner& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.displayName = j.at("displayName").get<std::string>(); 
    v.profileIconId = j.at("profileIconId").get<int32_t>(); 
  }
}