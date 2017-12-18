#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolReplaysReplaysConfiguration { 
    std::string minServerVersion;
    bool isPlayingReplay;
    bool isReplaysForEndOfGameEnabled;
    bool isPatching;
    double minutesUntilReplayConsideredLost;
    bool isPlayingGame;
    bool isLoggedIn;
    bool isReplaysEnabled;
    bool isReplaysForMatchHistoryEnabled;
    std::string gameVersion; 
  };
  inline void to_json(json& j, const LolReplaysReplaysConfiguration& v) {
    j["minServerVersion"] = v.minServerVersion; 
    j["isPlayingReplay"] = v.isPlayingReplay; 
    j["isReplaysForEndOfGameEnabled"] = v.isReplaysForEndOfGameEnabled; 
    j["isPatching"] = v.isPatching; 
    j["minutesUntilReplayConsideredLost"] = v.minutesUntilReplayConsideredLost; 
    j["isPlayingGame"] = v.isPlayingGame; 
    j["isLoggedIn"] = v.isLoggedIn; 
    j["isReplaysEnabled"] = v.isReplaysEnabled; 
    j["isReplaysForMatchHistoryEnabled"] = v.isReplaysForMatchHistoryEnabled; 
    j["gameVersion"] = v.gameVersion; 
  }
  inline void from_json(const json& j, LolReplaysReplaysConfiguration& v) {
    v.minServerVersion = j.at("minServerVersion").get<std::string>(); 
    v.isPlayingReplay = j.at("isPlayingReplay").get<bool>(); 
    v.isReplaysForEndOfGameEnabled = j.at("isReplaysForEndOfGameEnabled").get<bool>(); 
    v.isPatching = j.at("isPatching").get<bool>(); 
    v.minutesUntilReplayConsideredLost = j.at("minutesUntilReplayConsideredLost").get<double>(); 
    v.isPlayingGame = j.at("isPlayingGame").get<bool>(); 
    v.isLoggedIn = j.at("isLoggedIn").get<bool>(); 
    v.isReplaysEnabled = j.at("isReplaysEnabled").get<bool>(); 
    v.isReplaysForMatchHistoryEnabled = j.at("isReplaysForMatchHistoryEnabled").get<bool>(); 
    v.gameVersion = j.at("gameVersion").get<std::string>(); 
  }
}