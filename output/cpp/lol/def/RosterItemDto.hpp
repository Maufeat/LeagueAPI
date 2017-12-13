#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct RosterItemDto { 
    std::string clubRole;
    int32_t summonerIconId;
    std::string summonerName;
    uint64_t accountId; 
  };
  void to_json(json& j, const RosterItemDto& v) {
    j["clubRole"] = v.clubRole; 
    j["summonerIconId"] = v.summonerIconId; 
    j["summonerName"] = v.summonerName; 
    j["accountId"] = v.accountId; 
  }
  void from_json(const json& j, RosterItemDto& v) {
    v.clubRole = j.at("clubRole").get<std::string>(); 
    v.summonerIconId = j.at("summonerIconId").get<int32_t>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
  }
}