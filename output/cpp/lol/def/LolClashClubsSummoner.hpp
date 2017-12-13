#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolClashClubsSummoner { 
    std::string displayName;
    int32_t profileIconId;
    uint64_t summonerId; 
  };
  void to_json(json& j, const LolClashClubsSummoner& v) {
    j["displayName"] = v.displayName; 
    j["profileIconId"] = v.profileIconId; 
    j["summonerId"] = v.summonerId; 
  }
  void from_json(const json& j, LolClashClubsSummoner& v) {
    v.displayName = j.at("displayName").get<std::string>(); 
    v.profileIconId = j.at("profileIconId").get<int32_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}