#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolEsportStreamNotificationsESportsStreams.hpp>"

namespace leagueapi {
  struct LolEsportStreamNotificationsESportsLiveStreams { /**/ 
    std::vector<LolEsportStreamNotificationsESportsStreams> liveStreams;/**/
  };
  static void to_json(json& j, const LolEsportStreamNotificationsESportsLiveStreams& v) { 
    j["liveStreams"] = v.liveStreams;
  }
  static void from_json(const json& j, LolEsportStreamNotificationsESportsLiveStreams& v) { 
    v.liveStreams = j.at("liveStreams").get<std::vector<LolEsportStreamNotificationsESportsStreams>>(); 
  }
} 