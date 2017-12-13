#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/ClubRole.hpp>
namespace lol {
  struct ClubMember { 
    int64_t since;
    uint64_t summonerId;
    uint64_t accountId;
    int32_t summonerIconId;
    ClubRole role;
    std::string summonerName; 
  };
  void to_json(json& j, const ClubMember& v) {
  j["since"] = v.since; 
  j["summonerId"] = v.summonerId; 
  j["accountId"] = v.accountId; 
  j["summonerIconId"] = v.summonerIconId; 
  j["role"] = v.role; 
  j["summonerName"] = v.summonerName; 
  }
  void from_json(const json& j, ClubMember& v) {
  v.since = j.at("since").get<int64_t>(); 
  v.summonerId = j.at("summonerId").get<uint64_t>(); 
  v.accountId = j.at("accountId").get<uint64_t>(); 
  v.summonerIconId = j.at("summonerIconId").get<int32_t>(); 
  v.role = j.at("role").get<ClubRole>(); 
  v.summonerName = j.at("summonerName").get<std::string>(); 
  }
}