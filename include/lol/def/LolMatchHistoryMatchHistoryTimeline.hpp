#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolMatchHistoryMatchHistoryTimeline { 
    std::map<std::string, double> damageTakenDiffPerMinDeltas;
    std::string lane;
    uint16_t participantId;
    std::map<std::string, double> csDiffPerMinDeltas;
    std::map<std::string, double> damageTakenPerMinDeltas;
    std::string role;
    std::map<std::string, double> xpDiffPerMinDeltas;
    std::map<std::string, double> xpPerMinDeltas;
    std::map<std::string, double> creepsPerMinDeltas;
    std::map<std::string, double> goldPerMinDeltas; 
  };
  inline void to_json(json& j, const LolMatchHistoryMatchHistoryTimeline& v) {
    j["damageTakenDiffPerMinDeltas"] = v.damageTakenDiffPerMinDeltas; 
    j["lane"] = v.lane; 
    j["participantId"] = v.participantId; 
    j["csDiffPerMinDeltas"] = v.csDiffPerMinDeltas; 
    j["damageTakenPerMinDeltas"] = v.damageTakenPerMinDeltas; 
    j["role"] = v.role; 
    j["xpDiffPerMinDeltas"] = v.xpDiffPerMinDeltas; 
    j["xpPerMinDeltas"] = v.xpPerMinDeltas; 
    j["creepsPerMinDeltas"] = v.creepsPerMinDeltas; 
    j["goldPerMinDeltas"] = v.goldPerMinDeltas; 
  }
  inline void from_json(const json& j, LolMatchHistoryMatchHistoryTimeline& v) {
    v.damageTakenDiffPerMinDeltas = j.at("damageTakenDiffPerMinDeltas").get<std::map<std::string, double>>(); 
    v.lane = j.at("lane").get<std::string>(); 
    v.participantId = j.at("participantId").get<uint16_t>(); 
    v.csDiffPerMinDeltas = j.at("csDiffPerMinDeltas").get<std::map<std::string, double>>(); 
    v.damageTakenPerMinDeltas = j.at("damageTakenPerMinDeltas").get<std::map<std::string, double>>(); 
    v.role = j.at("role").get<std::string>(); 
    v.xpDiffPerMinDeltas = j.at("xpDiffPerMinDeltas").get<std::map<std::string, double>>(); 
    v.xpPerMinDeltas = j.at("xpPerMinDeltas").get<std::map<std::string, double>>(); 
    v.creepsPerMinDeltas = j.at("creepsPerMinDeltas").get<std::map<std::string, double>>(); 
    v.goldPerMinDeltas = j.at("goldPerMinDeltas").get<std::map<std::string, double>>(); 
  }
}