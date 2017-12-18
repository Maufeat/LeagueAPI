#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolMissionsLoginSession { 
    uint64_t summonerId;
    std::string platformId;
    uint64_t accountId; 
  };
  inline void to_json(json& j, const LolMissionsLoginSession& v) {
    j["summonerId"] = v.summonerId; 
    j["platformId"] = v.platformId; 
    j["accountId"] = v.accountId; 
  }
  inline void from_json(const json& j, LolMissionsLoginSession& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.platformId = j.at("platformId").get<std::string>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
  }
}