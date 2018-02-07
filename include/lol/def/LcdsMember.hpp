#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LcdsMember { 
    uint64_t summonerId;
    std::string summonerName;
    bool hasDelegatedInvitePower; 
  };
  inline void to_json(json& j, const LcdsMember& v) {
    j["summonerId"] = v.summonerId; 
    j["summonerName"] = v.summonerName; 
    j["hasDelegatedInvitePower"] = v.hasDelegatedInvitePower; 
  }
  inline void from_json(const json& j, LcdsMember& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.hasDelegatedInvitePower = j.at("hasDelegatedInvitePower").get<bool>(); 
  }
}