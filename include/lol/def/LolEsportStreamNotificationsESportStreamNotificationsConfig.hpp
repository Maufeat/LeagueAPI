#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolEsportStreamNotificationsESportStreamNotificationsConfig { 
    int64_t notificationsShortPollMinutes;
    std::string notificationsStreamURL;
    std::string notificationsServiceEndpoint;
    int64_t beappFailureLongPollMinutes;
    std::string notificationsServiceEndpointV2;
    bool notificationsEnabled;
    std::string notificationsAssetMagickURL;
    bool useServiceEndpointV2;
    std::string notificationsStreamGroupSlug;
    int64_t notificationsLongPollMinutes; 
  };
  inline void to_json(json& j, const LolEsportStreamNotificationsESportStreamNotificationsConfig& v) {
    j["notificationsShortPollMinutes"] = v.notificationsShortPollMinutes; 
    j["notificationsStreamURL"] = v.notificationsStreamURL; 
    j["notificationsServiceEndpoint"] = v.notificationsServiceEndpoint; 
    j["beappFailureLongPollMinutes"] = v.beappFailureLongPollMinutes; 
    j["notificationsServiceEndpointV2"] = v.notificationsServiceEndpointV2; 
    j["notificationsEnabled"] = v.notificationsEnabled; 
    j["notificationsAssetMagickURL"] = v.notificationsAssetMagickURL; 
    j["useServiceEndpointV2"] = v.useServiceEndpointV2; 
    j["notificationsStreamGroupSlug"] = v.notificationsStreamGroupSlug; 
    j["notificationsLongPollMinutes"] = v.notificationsLongPollMinutes; 
  }
  inline void from_json(const json& j, LolEsportStreamNotificationsESportStreamNotificationsConfig& v) {
    v.notificationsShortPollMinutes = j.at("notificationsShortPollMinutes").get<int64_t>(); 
    v.notificationsStreamURL = j.at("notificationsStreamURL").get<std::string>(); 
    v.notificationsServiceEndpoint = j.at("notificationsServiceEndpoint").get<std::string>(); 
    v.beappFailureLongPollMinutes = j.at("beappFailureLongPollMinutes").get<int64_t>(); 
    v.notificationsServiceEndpointV2 = j.at("notificationsServiceEndpointV2").get<std::string>(); 
    v.notificationsEnabled = j.at("notificationsEnabled").get<bool>(); 
    v.notificationsAssetMagickURL = j.at("notificationsAssetMagickURL").get<std::string>(); 
    v.useServiceEndpointV2 = j.at("useServiceEndpointV2").get<bool>(); 
    v.notificationsStreamGroupSlug = j.at("notificationsStreamGroupSlug").get<std::string>(); 
    v.notificationsLongPollMinutes = j.at("notificationsLongPollMinutes").get<int64_t>(); 
  }
}