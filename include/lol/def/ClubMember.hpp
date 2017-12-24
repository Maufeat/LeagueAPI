#pragma once
#include "../base_def.hpp" 
#include "ClubRole.hpp"
namespace lol {
  struct ClubMember { 
    uint64_t summonerId;
    int32_t summonerIconId;
    int64_t since;
    uint64_t accountId;
    std::string summonerName;
    ClubRole role; 
  };
  inline void to_json(json& j, const ClubMember& v) {
    j["summonerId"] = v.summonerId; 
    j["summonerIconId"] = v.summonerIconId; 
    j["since"] = v.since; 
    j["accountId"] = v.accountId; 
    j["summonerName"] = v.summonerName; 
    j["role"] = v.role; 
  }
  inline void from_json(const json& j, ClubMember& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.summonerIconId = j.at("summonerIconId").get<int32_t>(); 
    v.since = j.at("since").get<int64_t>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.role = j.at("role").get<ClubRole>(); 
  }
}