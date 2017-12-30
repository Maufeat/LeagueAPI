#pragma once
#include "../base_def.hpp" 
#include "ClubRole.hpp"
namespace lol {
  struct ClubMember { 
    std::string summonerName;
    int32_t summonerIconId;
    uint64_t accountId;
    uint64_t summonerId;
    int64_t since;
    ClubRole role; 
  };
  inline void to_json(json& j, const ClubMember& v) {
    j["summonerName"] = v.summonerName; 
    j["summonerIconId"] = v.summonerIconId; 
    j["accountId"] = v.accountId; 
    j["summonerId"] = v.summonerId; 
    j["since"] = v.since; 
    j["role"] = v.role; 
  }
  inline void from_json(const json& j, ClubMember& v) {
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.summonerIconId = j.at("summonerIconId").get<int32_t>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.since = j.at("since").get<int64_t>(); 
    v.role = j.at("role").get<ClubRole>(); 
  }
}