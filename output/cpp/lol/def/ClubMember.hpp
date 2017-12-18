#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/ClubRole.hpp>
namespace lol {
  struct ClubMember { 
    int64_t since;
    std::string summonerName;
    ClubRole role;
    int32_t summonerIconId;
    uint64_t accountId;
    uint64_t summonerId; 
  };
  inline void to_json(json& j, const ClubMember& v) {
    j["since"] = v.since; 
    j["summonerName"] = v.summonerName; 
    j["role"] = v.role; 
    j["summonerIconId"] = v.summonerIconId; 
    j["accountId"] = v.accountId; 
    j["summonerId"] = v.summonerId; 
  }
  inline void from_json(const json& j, ClubMember& v) {
    v.since = j.at("since").get<int64_t>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.role = j.at("role").get<ClubRole>(); 
    v.summonerIconId = j.at("summonerIconId").get<int32_t>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}