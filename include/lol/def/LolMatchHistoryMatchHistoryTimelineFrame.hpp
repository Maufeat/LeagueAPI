#pragma once
#include "../base_def.hpp" 
#include "LolMatchHistoryMatchHistoryEvent.hpp"
#include "LolMatchHistoryMatchHistoryParticipantFrame.hpp"
namespace lol {
  struct LolMatchHistoryMatchHistoryTimelineFrame { 
    uint64_t timestamp;
    std::vector<LolMatchHistoryMatchHistoryEvent> events;
    std::map<std::string, LolMatchHistoryMatchHistoryParticipantFrame> participantFrames; 
  };
  inline void to_json(json& j, const LolMatchHistoryMatchHistoryTimelineFrame& v) {
    j["timestamp"] = v.timestamp; 
    j["events"] = v.events; 
    j["participantFrames"] = v.participantFrames; 
  }
  inline void from_json(const json& j, LolMatchHistoryMatchHistoryTimelineFrame& v) {
    v.timestamp = j.at("timestamp").get<uint64_t>(); 
    v.events = j.at("events").get<std::vector<LolMatchHistoryMatchHistoryEvent>>(); 
    v.participantFrames = j.at("participantFrames").get<std::map<std::string, LolMatchHistoryMatchHistoryParticipantFrame>>(); 
  }
}