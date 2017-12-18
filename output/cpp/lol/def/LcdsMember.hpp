#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LcdsMember { 
    bool hasDelegatedInvitePower;
    std::string summonerName;
    uint64_t summonerId; 
  };
  inline void to_json(json& j, const LcdsMember& v) {
    j["hasDelegatedInvitePower"] = v.hasDelegatedInvitePower; 
    j["summonerName"] = v.summonerName; 
    j["summonerId"] = v.summonerId; 
  }
  inline void from_json(const json& j, LcdsMember& v) {
    v.hasDelegatedInvitePower = j.at("hasDelegatedInvitePower").get<bool>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}