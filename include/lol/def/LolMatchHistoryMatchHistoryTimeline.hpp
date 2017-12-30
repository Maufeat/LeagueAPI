#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolMatchHistoryMatchHistoryTimeline { 
    std::map<std::string, double> damageTakenDiffPerMinDeltas;
    std::map<std::string, double> xpDiffPerMinDeltas;
    std::map<std::string, double> csDiffPerMinDeltas;
    std::string role;
    std::map<std::string, double> xpPerMinDeltas;
    std::map<std::string, double> goldPerMinDeltas;
    std::map<std::string, double> creepsPerMinDeltas;
    uint16_t participantId;
    std::map<std::string, double> damageTakenPerMinDeltas;
    std::string lane; 
  };
  inline void to_json(json& j, const LolMatchHistoryMatchHistoryTimeline& v) {
    j["damageTakenDiffPerMinDeltas"] = v.damageTakenDiffPerMinDeltas; 
    j["xpDiffPerMinDeltas"] = v.xpDiffPerMinDeltas; 
    j["csDiffPerMinDeltas"] = v.csDiffPerMinDeltas; 
    j["role"] = v.role; 
    j["xpPerMinDeltas"] = v.xpPerMinDeltas; 
    j["goldPerMinDeltas"] = v.goldPerMinDeltas; 
    j["creepsPerMinDeltas"] = v.creepsPerMinDeltas; 
    j["participantId"] = v.participantId; 
    j["damageTakenPerMinDeltas"] = v.damageTakenPerMinDeltas; 
    j["lane"] = v.lane; 
  }
  inline void from_json(const json& j, LolMatchHistoryMatchHistoryTimeline& v) {
    v.damageTakenDiffPerMinDeltas = j.at("damageTakenDiffPerMinDeltas").get<std::map<std::string, double>>(); 
    v.xpDiffPerMinDeltas = j.at("xpDiffPerMinDeltas").get<std::map<std::string, double>>(); 
    v.csDiffPerMinDeltas = j.at("csDiffPerMinDeltas").get<std::map<std::string, double>>(); 
    v.role = j.at("role").get<std::string>(); 
    v.xpPerMinDeltas = j.at("xpPerMinDeltas").get<std::map<std::string, double>>(); 
    v.goldPerMinDeltas = j.at("goldPerMinDeltas").get<std::map<std::string, double>>(); 
    v.creepsPerMinDeltas = j.at("creepsPerMinDeltas").get<std::map<std::string, double>>(); 
    v.participantId = j.at("participantId").get<uint16_t>(); 
    v.damageTakenPerMinDeltas = j.at("damageTakenPerMinDeltas").get<std::map<std::string, double>>(); 
    v.lane = j.at("lane").get<std::string>(); 
  }
}