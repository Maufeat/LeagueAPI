#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolMatchHistoryMatchHistoryEvent.hpp>"
#include "<leagueapi/definitions/LolMatchHistoryMatchHistoryParticipantFrame.hpp>"

namespace leagueapi {
  struct LolMatchHistoryMatchHistoryTimelineFrame { /**/ 
    uint64_t timestamp;/**/
    std::map<std::string, LolMatchHistoryMatchHistoryParticipantFrame> participantFrames;/**/
    std::vector<LolMatchHistoryMatchHistoryEvent> events;/**/
  };
  static void to_json(json& j, const LolMatchHistoryMatchHistoryTimelineFrame& v) { 
    j["timestamp"] = v.timestamp;
    j["participantFrames"] = v.participantFrames;
    j["events"] = v.events;
  }
  static void from_json(const json& j, LolMatchHistoryMatchHistoryTimelineFrame& v) { 
    v.timestamp = j.at("timestamp").get<uint64_t>(); 
    v.participantFrames = j.at("participantFrames").get<std::map<std::string, LolMatchHistoryMatchHistoryParticipantFrame>>(); 
    v.events = j.at("events").get<std::vector<LolMatchHistoryMatchHistoryEvent>>(); 
  }
} 