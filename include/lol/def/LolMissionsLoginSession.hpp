#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolMissionsLoginSession { 
    uint64_t accountId;
    uint64_t summonerId;
    std::string platformId; 
  };
  inline void to_json(json& j, const LolMissionsLoginSession& v) {
    j["accountId"] = v.accountId; 
    j["summonerId"] = v.summonerId; 
    j["platformId"] = v.platformId; 
  }
  inline void from_json(const json& j, LolMissionsLoginSession& v) {
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.platformId = j.at("platformId").get<std::string>(); 
  }
}