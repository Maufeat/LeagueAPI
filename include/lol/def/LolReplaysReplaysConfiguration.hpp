#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolReplaysReplaysConfiguration { 
    bool isReplaysEnabled;
    bool isReplaysForEndOfGameEnabled;
    bool isReplaysForMatchHistoryEnabled;
    bool isPatching;
    bool isPlayingGame;
    bool isPlayingReplay;
    bool isLoggedIn;
    std::string gameVersion;
    std::string minServerVersion;
    double minutesUntilReplayConsideredLost; 
  };
  inline void to_json(json& j, const LolReplaysReplaysConfiguration& v) {
    j["isReplaysEnabled"] = v.isReplaysEnabled; 
    j["isReplaysForEndOfGameEnabled"] = v.isReplaysForEndOfGameEnabled; 
    j["isReplaysForMatchHistoryEnabled"] = v.isReplaysForMatchHistoryEnabled; 
    j["isPatching"] = v.isPatching; 
    j["isPlayingGame"] = v.isPlayingGame; 
    j["isPlayingReplay"] = v.isPlayingReplay; 
    j["isLoggedIn"] = v.isLoggedIn; 
    j["gameVersion"] = v.gameVersion; 
    j["minServerVersion"] = v.minServerVersion; 
    j["minutesUntilReplayConsideredLost"] = v.minutesUntilReplayConsideredLost; 
  }
  inline void from_json(const json& j, LolReplaysReplaysConfiguration& v) {
    v.isReplaysEnabled = j.at("isReplaysEnabled").get<bool>(); 
    v.isReplaysForEndOfGameEnabled = j.at("isReplaysForEndOfGameEnabled").get<bool>(); 
    v.isReplaysForMatchHistoryEnabled = j.at("isReplaysForMatchHistoryEnabled").get<bool>(); 
    v.isPatching = j.at("isPatching").get<bool>(); 
    v.isPlayingGame = j.at("isPlayingGame").get<bool>(); 
    v.isPlayingReplay = j.at("isPlayingReplay").get<bool>(); 
    v.isLoggedIn = j.at("isLoggedIn").get<bool>(); 
    v.gameVersion = j.at("gameVersion").get<std::string>(); 
    v.minServerVersion = j.at("minServerVersion").get<std::string>(); 
    v.minutesUntilReplayConsideredLost = j.at("minutesUntilReplayConsideredLost").get<double>(); 
  }
}