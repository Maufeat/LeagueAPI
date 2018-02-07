#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolMatchHistoryMatchHistoryTimeline { 
    uint16_t participantId;
    std::string role;
    std::string lane;
    std::map<std::string, double> creepsPerMinDeltas;
    std::map<std::string, double> xpPerMinDeltas;
    std::map<std::string, double> goldPerMinDeltas;
    std::map<std::string, double> csDiffPerMinDeltas;
    std::map<std::string, double> xpDiffPerMinDeltas;
    std::map<std::string, double> damageTakenPerMinDeltas;
    std::map<std::string, double> damageTakenDiffPerMinDeltas; 
  };
  inline void to_json(json& j, const LolMatchHistoryMatchHistoryTimeline& v) {
    j["participantId"] = v.participantId; 
    j["role"] = v.role; 
    j["lane"] = v.lane; 
    j["creepsPerMinDeltas"] = v.creepsPerMinDeltas; 
    j["xpPerMinDeltas"] = v.xpPerMinDeltas; 
    j["goldPerMinDeltas"] = v.goldPerMinDeltas; 
    j["csDiffPerMinDeltas"] = v.csDiffPerMinDeltas; 
    j["xpDiffPerMinDeltas"] = v.xpDiffPerMinDeltas; 
    j["damageTakenPerMinDeltas"] = v.damageTakenPerMinDeltas; 
    j["damageTakenDiffPerMinDeltas"] = v.damageTakenDiffPerMinDeltas; 
  }
  inline void from_json(const json& j, LolMatchHistoryMatchHistoryTimeline& v) {
    v.participantId = j.at("participantId").get<uint16_t>(); 
    v.role = j.at("role").get<std::string>(); 
    v.lane = j.at("lane").get<std::string>(); 
    v.creepsPerMinDeltas = j.at("creepsPerMinDeltas").get<std::map<std::string, double>>(); 
    v.xpPerMinDeltas = j.at("xpPerMinDeltas").get<std::map<std::string, double>>(); 
    v.goldPerMinDeltas = j.at("goldPerMinDeltas").get<std::map<std::string, double>>(); 
    v.csDiffPerMinDeltas = j.at("csDiffPerMinDeltas").get<std::map<std::string, double>>(); 
    v.xpDiffPerMinDeltas = j.at("xpDiffPerMinDeltas").get<std::map<std::string, double>>(); 
    v.damageTakenPerMinDeltas = j.at("damageTakenPerMinDeltas").get<std::map<std::string, double>>(); 
    v.damageTakenDiffPerMinDeltas = j.at("damageTakenDiffPerMinDeltas").get<std::map<std::string, double>>(); 
  }
}