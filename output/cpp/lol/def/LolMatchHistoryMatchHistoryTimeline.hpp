#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolMatchHistoryMatchHistoryTimeline { 
    std::string lane;
    std::map<std::string, double> goldPerMinDeltas;
    std::map<std::string, double> xpDiffPerMinDeltas;
    std::string role;
    std::map<std::string, double> xpPerMinDeltas;
    std::map<std::string, double> csDiffPerMinDeltas;
    std::map<std::string, double> creepsPerMinDeltas;
    uint16_t participantId;
    std::map<std::string, double> damageTakenDiffPerMinDeltas;
    std::map<std::string, double> damageTakenPerMinDeltas; 
  };
  void to_json(json& j, const LolMatchHistoryMatchHistoryTimeline& v) {
  j["lane"] = v.lane; 
  j["goldPerMinDeltas"] = v.goldPerMinDeltas; 
  j["xpDiffPerMinDeltas"] = v.xpDiffPerMinDeltas; 
  j["role"] = v.role; 
  j["xpPerMinDeltas"] = v.xpPerMinDeltas; 
  j["csDiffPerMinDeltas"] = v.csDiffPerMinDeltas; 
  j["creepsPerMinDeltas"] = v.creepsPerMinDeltas; 
  j["participantId"] = v.participantId; 
  j["damageTakenDiffPerMinDeltas"] = v.damageTakenDiffPerMinDeltas; 
  j["damageTakenPerMinDeltas"] = v.damageTakenPerMinDeltas; 
  }
  void from_json(const json& j, LolMatchHistoryMatchHistoryTimeline& v) {
  v.lane = j.at("lane").get<std::string>(); 
  v.goldPerMinDeltas = j.at("goldPerMinDeltas").get<std::map<std::string, double>>(); 
  v.xpDiffPerMinDeltas = j.at("xpDiffPerMinDeltas").get<std::map<std::string, double>>(); 
  v.role = j.at("role").get<std::string>(); 
  v.xpPerMinDeltas = j.at("xpPerMinDeltas").get<std::map<std::string, double>>(); 
  v.csDiffPerMinDeltas = j.at("csDiffPerMinDeltas").get<std::map<std::string, double>>(); 
  v.creepsPerMinDeltas = j.at("creepsPerMinDeltas").get<std::map<std::string, double>>(); 
  v.participantId = j.at("participantId").get<uint16_t>(); 
  v.damageTakenDiffPerMinDeltas = j.at("damageTakenDiffPerMinDeltas").get<std::map<std::string, double>>(); 
  v.damageTakenPerMinDeltas = j.at("damageTakenPerMinDeltas").get<std::map<std::string, double>>(); 
  }
}