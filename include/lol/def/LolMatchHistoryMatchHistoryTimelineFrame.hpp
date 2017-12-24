#pragma once
#include "../base_def.hpp" 
#include "LolMatchHistoryMatchHistoryEvent.hpp"
#include "LolMatchHistoryMatchHistoryParticipantFrame.hpp"
namespace lol {
  struct LolMatchHistoryMatchHistoryTimelineFrame { 
    std::map<std::string, LolMatchHistoryMatchHistoryParticipantFrame> participantFrames;
    uint64_t timestamp;
    std::vector<LolMatchHistoryMatchHistoryEvent> events; 
  };
  inline void to_json(json& j, const LolMatchHistoryMatchHistoryTimelineFrame& v) {
    j["participantFrames"] = v.participantFrames; 
    j["timestamp"] = v.timestamp; 
    j["events"] = v.events; 
  }
  inline void from_json(const json& j, LolMatchHistoryMatchHistoryTimelineFrame& v) {
    v.participantFrames = j.at("participantFrames").get<std::map<std::string, LolMatchHistoryMatchHistoryParticipantFrame>>(); 
    v.timestamp = j.at("timestamp").get<uint64_t>(); 
    v.events = j.at("events").get<std::vector<LolMatchHistoryMatchHistoryEvent>>(); 
  }
}