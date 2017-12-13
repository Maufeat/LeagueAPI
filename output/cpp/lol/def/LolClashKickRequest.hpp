#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolClashKickRequest { 
    uint64_t summonerId; 
  };
  void to_json(json& j, const LolClashKickRequest& v) {
  j["summonerId"] = v.summonerId; 
  }
  void from_json(const json& j, LolClashKickRequest& v) {
  v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}