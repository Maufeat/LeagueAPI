#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolReplaysGameflowWatchPhase {  
    None_e = 0,
    WatchFailedToLaunch_e = 3,
    WatchInProgress_e = 2,
    WatchStarted_e = 1,
  };
  void to_json(json& j, const LolReplaysGameflowWatchPhase& v) {
  if(v == LolReplaysGameflowWatchPhase::None_e) {
    j = "None";
    return;
  }
  if(v == LolReplaysGameflowWatchPhase::WatchFailedToLaunch_e) {
    j = "WatchFailedToLaunch";
    return;
  }
  if(v == LolReplaysGameflowWatchPhase::WatchInProgress_e) {
    j = "WatchInProgress";
    return;
  }
  if(v == LolReplaysGameflowWatchPhase::WatchStarted_e) {
    j = "WatchStarted";
    return;
  }
  }
  void from_json(const json& j, LolReplaysGameflowWatchPhase& v) {
  if(j.get<std::string>() == "None") {
    v = LolReplaysGameflowWatchPhase::None_e;
    return;
  } 
  if(j.get<std::string>() == "WatchFailedToLaunch") {
    v = LolReplaysGameflowWatchPhase::WatchFailedToLaunch_e;
    return;
  } 
  if(j.get<std::string>() == "WatchInProgress") {
    v = LolReplaysGameflowWatchPhase::WatchInProgress_e;
    return;
  } 
  if(j.get<std::string>() == "WatchStarted") {
    v = LolReplaysGameflowWatchPhase::WatchStarted_e;
    return;
  } 
  }
}