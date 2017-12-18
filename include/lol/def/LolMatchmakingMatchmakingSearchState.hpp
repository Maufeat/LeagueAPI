#pragma once
#include "../base_def.hpp" 
namespace lol {
  enum struct LolMatchmakingMatchmakingSearchState {  
    AbandonedLowPriorityQueue_e = 1,
    Canceled_e = 2,
    Error_e = 5,
    Found_e = 4,
    Invalid_e = 0,
    Searching_e = 3,
    ServiceError_e = 6,
    ServiceShutdown_e = 7,
  };
  inline void to_json(json& j, const LolMatchmakingMatchmakingSearchState& v) {
    if(v == LolMatchmakingMatchmakingSearchState::AbandonedLowPriorityQueue_e) {
      j = "AbandonedLowPriorityQueue";
      return;
    }
    if(v == LolMatchmakingMatchmakingSearchState::Canceled_e) {
      j = "Canceled";
      return;
    }
    if(v == LolMatchmakingMatchmakingSearchState::Error_e) {
      j = "Error";
      return;
    }
    if(v == LolMatchmakingMatchmakingSearchState::Found_e) {
      j = "Found";
      return;
    }
    if(v == LolMatchmakingMatchmakingSearchState::Invalid_e) {
      j = "Invalid";
      return;
    }
    if(v == LolMatchmakingMatchmakingSearchState::Searching_e) {
      j = "Searching";
      return;
    }
    if(v == LolMatchmakingMatchmakingSearchState::ServiceError_e) {
      j = "ServiceError";
      return;
    }
    if(v == LolMatchmakingMatchmakingSearchState::ServiceShutdown_e) {
      j = "ServiceShutdown";
      return;
    }
  }
  inline void from_json(const json& j, LolMatchmakingMatchmakingSearchState& v) {
    if(j.get<std::string>() == "AbandonedLowPriorityQueue") {
      v = LolMatchmakingMatchmakingSearchState::AbandonedLowPriorityQueue_e;
      return;
    } 
    if(j.get<std::string>() == "Canceled") {
      v = LolMatchmakingMatchmakingSearchState::Canceled_e;
      return;
    } 
    if(j.get<std::string>() == "Error") {
      v = LolMatchmakingMatchmakingSearchState::Error_e;
      return;
    } 
    if(j.get<std::string>() == "Found") {
      v = LolMatchmakingMatchmakingSearchState::Found_e;
      return;
    } 
    if(j.get<std::string>() == "Invalid") {
      v = LolMatchmakingMatchmakingSearchState::Invalid_e;
      return;
    } 
    if(j.get<std::string>() == "Searching") {
      v = LolMatchmakingMatchmakingSearchState::Searching_e;
      return;
    } 
    if(j.get<std::string>() == "ServiceError") {
      v = LolMatchmakingMatchmakingSearchState::ServiceError_e;
      return;
    } 
    if(j.get<std::string>() == "ServiceShutdown") {
      v = LolMatchmakingMatchmakingSearchState::ServiceShutdown_e;
      return;
    } 
  }
}