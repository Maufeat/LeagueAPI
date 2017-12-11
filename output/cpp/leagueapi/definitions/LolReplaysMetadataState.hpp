#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolReplaysMetadataState { /**/ 
    checking_e = 0, /**/ 
    download_e = 3, /**/ 
    downloading_e = 4, /**/ 
    error_e = 10, /**/ 
    found_e = 1, /**/ 
    incompatible_e = 5, /**/ 
    lost_e = 8, /**/ 
    missingOrExpired_e = 6, /**/ 
    retryDownload_e = 7, /**/ 
    unsupported_e = 9, /**/ 
    watch_e = 2, /**/ 
  };
  static void to_json(json& j, const LolReplaysMetadataState& v) {
    switch(v) { 
    case LolReplaysMetadataState::checking_e:
      j = "checking";
    break;
    case LolReplaysMetadataState::download_e:
      j = "download";
    break;
    case LolReplaysMetadataState::downloading_e:
      j = "downloading";
    break;
    case LolReplaysMetadataState::error_e:
      j = "error";
    break;
    case LolReplaysMetadataState::found_e:
      j = "found";
    break;
    case LolReplaysMetadataState::incompatible_e:
      j = "incompatible";
    break;
    case LolReplaysMetadataState::lost_e:
      j = "lost";
    break;
    case LolReplaysMetadataState::missingOrExpired_e:
      j = "missingOrExpired";
    break;
    case LolReplaysMetadataState::retryDownload_e:
      j = "retryDownload";
    break;
    case LolReplaysMetadataState::unsupported_e:
      j = "unsupported";
    break;
    case LolReplaysMetadataState::watch_e:
      j = "watch";
    break;
    };
  }
  static void from_json(const json& j, LolReplaysMetadataState& v) {
    auto s = j.get<std::string>(); 
    if(s == "checking") {
      v = LolReplaysMetadataState::checking_e;
      return;
    } 
    if(s == "download") {
      v = LolReplaysMetadataState::download_e;
      return;
    } 
    if(s == "downloading") {
      v = LolReplaysMetadataState::downloading_e;
      return;
    } 
    if(s == "error") {
      v = LolReplaysMetadataState::error_e;
      return;
    } 
    if(s == "found") {
      v = LolReplaysMetadataState::found_e;
      return;
    } 
    if(s == "incompatible") {
      v = LolReplaysMetadataState::incompatible_e;
      return;
    } 
    if(s == "lost") {
      v = LolReplaysMetadataState::lost_e;
      return;
    } 
    if(s == "missingOrExpired") {
      v = LolReplaysMetadataState::missingOrExpired_e;
      return;
    } 
    if(s == "retryDownload") {
      v = LolReplaysMetadataState::retryDownload_e;
      return;
    } 
    if(s == "unsupported") {
      v = LolReplaysMetadataState::unsupported_e;
      return;
    } 
    if(s == "watch") {
      v = LolReplaysMetadataState::watch_e;
      return;
    } 
  }
} 