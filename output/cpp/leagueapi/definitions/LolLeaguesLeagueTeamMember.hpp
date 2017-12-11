#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolLeaguesLeagueTeamMember { /**/ 
    uint64_t totalGamePlayed;/**/
    float winRate;/**/
    uint64_t id;/**/
    std::string name;/**/
  };
  static void to_json(json& j, const LolLeaguesLeagueTeamMember& v) { 
    j["totalGamePlayed"] = v.totalGamePlayed;
    j["winRate"] = v.winRate;
    j["id"] = v.id;
    j["name"] = v.name;
  }
  static void from_json(const json& j, LolLeaguesLeagueTeamMember& v) { 
    v.totalGamePlayed = j.at("totalGamePlayed").get<uint64_t>(); 
    v.winRate = j.at("winRate").get<float>(); 
    v.id = j.at("id").get<uint64_t>(); 
    v.name = j.at("name").get<std::string>(); 
  }
} 