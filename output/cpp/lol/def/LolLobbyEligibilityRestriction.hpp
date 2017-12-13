#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLobbyEligibilityRestrictionCode.hpp>
namespace lol {
  struct LolLobbyEligibilityRestriction { 
    std::map<std::string, std::string> restrictionArgs;
    std::vector<uint64_t> summonerIds;
    uint64_t expiredTimestamp;
    LolLobbyEligibilityRestrictionCode restrictionCode; 
  };
  void to_json(json& j, const LolLobbyEligibilityRestriction& v) {
  j["restrictionArgs"] = v.restrictionArgs; 
  j["summonerIds"] = v.summonerIds; 
  j["expiredTimestamp"] = v.expiredTimestamp; 
  j["restrictionCode"] = v.restrictionCode; 
  }
  void from_json(const json& j, LolLobbyEligibilityRestriction& v) {
  v.restrictionArgs = j.at("restrictionArgs").get<std::map<std::string, std::string>>(); 
  v.summonerIds = j.at("summonerIds").get<std::vector<uint64_t>>(); 
  v.expiredTimestamp = j.at("expiredTimestamp").get<uint64_t>(); 
  v.restrictionCode = j.at("restrictionCode").get<LolLobbyEligibilityRestrictionCode>(); 
  }
}