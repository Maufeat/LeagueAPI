#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LcdsMember { 
    std::string summonerName;
    uint64_t summonerId;
    bool hasDelegatedInvitePower; 
  };
  void to_json(json& j, const LcdsMember& v) {
  j["summonerName"] = v.summonerName; 
  j["summonerId"] = v.summonerId; 
  j["hasDelegatedInvitePower"] = v.hasDelegatedInvitePower; 
  }
  void from_json(const json& j, LcdsMember& v) {
  v.summonerName = j.at("summonerName").get<std::string>(); 
  v.summonerId = j.at("summonerId").get<uint64_t>(); 
  v.hasDelegatedInvitePower = j.at("hasDelegatedInvitePower").get<bool>(); 
  }
}