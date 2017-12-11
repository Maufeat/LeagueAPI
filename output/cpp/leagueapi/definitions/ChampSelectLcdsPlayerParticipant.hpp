#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct ChampSelectLcdsPlayerParticipant { /**/ 
    uint64_t summonerId;/**/
    std::string summonerName;/**/
    int32_t pickMode;/**/
    std::string summonerInternalName;/**/
    int32_t pickTurn;/**/
  };
  static void to_json(json& j, const ChampSelectLcdsPlayerParticipant& v) { 
    j["summonerId"] = v.summonerId;
    j["summonerName"] = v.summonerName;
    j["pickMode"] = v.pickMode;
    j["summonerInternalName"] = v.summonerInternalName;
    j["pickTurn"] = v.pickTurn;
  }
  static void from_json(const json& j, ChampSelectLcdsPlayerParticipant& v) { 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.pickMode = j.at("pickMode").get<int32_t>(); 
    v.summonerInternalName = j.at("summonerInternalName").get<std::string>(); 
    v.pickTurn = j.at("pickTurn").get<int32_t>(); 
  }
} 