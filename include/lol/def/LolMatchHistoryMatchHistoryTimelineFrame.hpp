#pragma once
#include "../base_def.hpp" 
#include "LolMatchHistoryMatchHistoryParticipantFrame.hpp"
#include "LolMatchHistoryMatchHistoryEvent.hpp"
namespace lol {
  struct LolMatchHistoryMatchHistoryTimelineFrame { 
    std::map<std::string, LolMatchHistoryMatchHistoryParticipantFrame> participantFrames;
    std::vector<LolMatchHistoryMatchHistoryEvent> events;
    uint64_t timestamp; 
  };
  inline void to_json(json& j, const LolMatchHistoryMatchHistoryTimelineFrame& v) {
    j["participantFrames"] = v.participantFrames; 
    j["events"] = v.events; 
    j["timestamp"] = v.timestamp; 
  }
  inline void from_json(const json& j, LolMatchHistoryMatchHistoryTimelineFrame& v) {
    v.participantFrames = j.at("participantFrames").get<std::map<std::string, LolMatchHistoryMatchHistoryParticipantFrame>>(); 
    v.events = j.at("events").get<std::vector<LolMatchHistoryMatchHistoryEvent>>(); 
    v.timestamp = j.at("timestamp").get<uint64_t>(); 
  }
}