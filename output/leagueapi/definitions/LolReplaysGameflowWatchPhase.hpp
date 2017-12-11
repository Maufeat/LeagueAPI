#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolReplaysGameflowWatchPhase { /**/ 
    None_e = 0, /**/ 
    WatchFailedToLaunch_e = 3, /**/ 
    WatchInProgress_e = 2, /**/ 
    WatchStarted_e = 1, /**/ 
  };
  static void to_json(json& j, const LolReplaysGameflowWatchPhase& v) {
    switch(v) { 
    case LolReplaysGameflowWatchPhase::None_e:
      j = "None";
    break;
    case LolReplaysGameflowWatchPhase::WatchFailedToLaunch_e:
      j = "WatchFailedToLaunch";
    break;
    case LolReplaysGameflowWatchPhase::WatchInProgress_e:
      j = "WatchInProgress";
    break;
    case LolReplaysGameflowWatchPhase::WatchStarted_e:
      j = "WatchStarted";
    break;
    };
  }
  static void from_json(const json& j, LolReplaysGameflowWatchPhase& v) {
    auto s = j.get<std::string>(); 
    if(s == "None") {
      v = LolReplaysGameflowWatchPhase::None_e;
      return;
    } 
    if(s == "WatchFailedToLaunch") {
      v = LolReplaysGameflowWatchPhase::WatchFailedToLaunch_e;
      return;
    } 
    if(s == "WatchInProgress") {
      v = LolReplaysGameflowWatchPhase::WatchInProgress_e;
      return;
    } 
    if(s == "WatchStarted") {
      v = LolReplaysGameflowWatchPhase::WatchStarted_e;
      return;
    } 
  }
} 