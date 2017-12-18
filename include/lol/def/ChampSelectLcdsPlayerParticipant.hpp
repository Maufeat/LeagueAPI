#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct ChampSelectLcdsPlayerParticipant { 
    int32_t pickMode;
    std::string summonerInternalName;
    int32_t pickTurn;
    std::string summonerName;
    uint64_t summonerId; 
  };
  inline void to_json(json& j, const ChampSelectLcdsPlayerParticipant& v) {
    j["pickMode"] = v.pickMode; 
    j["summonerInternalName"] = v.summonerInternalName; 
    j["pickTurn"] = v.pickTurn; 
    j["summonerName"] = v.summonerName; 
    j["summonerId"] = v.summonerId; 
  }
  inline void from_json(const json& j, ChampSelectLcdsPlayerParticipant& v) {
    v.pickMode = j.at("pickMode").get<int32_t>(); 
    v.summonerInternalName = j.at("summonerInternalName").get<std::string>(); 
    v.pickTurn = j.at("pickTurn").get<int32_t>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}