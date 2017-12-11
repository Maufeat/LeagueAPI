#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolLobbyLobbyMatchmakingSearchState { /**/ 
    AbandonedLowPriorityQueue_e = 1, /**/ 
    Canceled_e = 2, /**/ 
    Error_e = 5, /**/ 
    Found_e = 4, /**/ 
    Invalid_e = 0, /**/ 
    Searching_e = 3, /**/ 
    ServiceError_e = 6, /**/ 
    ServiceShutdown_e = 7, /**/ 
  };
  static void to_json(json& j, const LolLobbyLobbyMatchmakingSearchState& v) {
    switch(v) { 
    case LolLobbyLobbyMatchmakingSearchState::AbandonedLowPriorityQueue_e:
      j = "AbandonedLowPriorityQueue";
    break;
    case LolLobbyLobbyMatchmakingSearchState::Canceled_e:
      j = "Canceled";
    break;
    case LolLobbyLobbyMatchmakingSearchState::Error_e:
      j = "Error";
    break;
    case LolLobbyLobbyMatchmakingSearchState::Found_e:
      j = "Found";
    break;
    case LolLobbyLobbyMatchmakingSearchState::Invalid_e:
      j = "Invalid";
    break;
    case LolLobbyLobbyMatchmakingSearchState::Searching_e:
      j = "Searching";
    break;
    case LolLobbyLobbyMatchmakingSearchState::ServiceError_e:
      j = "ServiceError";
    break;
    case LolLobbyLobbyMatchmakingSearchState::ServiceShutdown_e:
      j = "ServiceShutdown";
    break;
    };
  }
  static void from_json(const json& j, LolLobbyLobbyMatchmakingSearchState& v) {
    auto s = j.get<std::string>(); 
    if(s == "AbandonedLowPriorityQueue") {
      v = LolLobbyLobbyMatchmakingSearchState::AbandonedLowPriorityQueue_e;
      return;
    } 
    if(s == "Canceled") {
      v = LolLobbyLobbyMatchmakingSearchState::Canceled_e;
      return;
    } 
    if(s == "Error") {
      v = LolLobbyLobbyMatchmakingSearchState::Error_e;
      return;
    } 
    if(s == "Found") {
      v = LolLobbyLobbyMatchmakingSearchState::Found_e;
      return;
    } 
    if(s == "Invalid") {
      v = LolLobbyLobbyMatchmakingSearchState::Invalid_e;
      return;
    } 
    if(s == "Searching") {
      v = LolLobbyLobbyMatchmakingSearchState::Searching_e;
      return;
    } 
    if(s == "ServiceError") {
      v = LolLobbyLobbyMatchmakingSearchState::ServiceError_e;
      return;
    } 
    if(s == "ServiceShutdown") {
      v = LolLobbyLobbyMatchmakingSearchState::ServiceShutdown_e;
      return;
    } 
  }
} 