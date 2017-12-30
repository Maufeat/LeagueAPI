#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct RosterItemDto { 
    uint64_t accountId;
    std::string summonerName;
    std::string clubRole;
    int32_t summonerIconId; 
  };
  inline void to_json(json& j, const RosterItemDto& v) {
    j["accountId"] = v.accountId; 
    j["summonerName"] = v.summonerName; 
    j["clubRole"] = v.clubRole; 
    j["summonerIconId"] = v.summonerIconId; 
  }
  inline void from_json(const json& j, RosterItemDto& v) {
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.clubRole = j.at("clubRole").get<std::string>(); 
    v.summonerIconId = j.at("summonerIconId").get<int32_t>(); 
  }
}