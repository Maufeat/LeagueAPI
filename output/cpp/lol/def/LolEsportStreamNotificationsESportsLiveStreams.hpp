#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolEsportStreamNotificationsESportsStreams.hpp>
namespace lol {
  struct LolEsportStreamNotificationsESportsLiveStreams { 
    std::vector<LolEsportStreamNotificationsESportsStreams> liveStreams; 
  };
  inline void to_json(json& j, const LolEsportStreamNotificationsESportsLiveStreams& v) {
    j["liveStreams"] = v.liveStreams; 
  }
  inline void from_json(const json& j, LolEsportStreamNotificationsESportsLiveStreams& v) {
    v.liveStreams = j.at("liveStreams").get<std::vector<LolEsportStreamNotificationsESportsStreams>>(); 
  }
}