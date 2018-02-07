#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolEsportStreamNotificationsESportStreamNotificationsConfig { 
    bool notificationsEnabled;
    std::string notificationsServiceEndpoint;
    std::string notificationsStreamURL;
    std::string notificationsStreamGroupSlug;
    std::string notificationsAssetMagickURL;
    bool useServiceEndpointV2;
    std::string notificationsServiceEndpointV2;
    int64_t notificationsShortPollMinutes;
    int64_t notificationsLongPollMinutes;
    int64_t beappFailureLongPollMinutes; 
  };
  inline void to_json(json& j, const LolEsportStreamNotificationsESportStreamNotificationsConfig& v) {
    j["notificationsEnabled"] = v.notificationsEnabled; 
    j["notificationsServiceEndpoint"] = v.notificationsServiceEndpoint; 
    j["notificationsStreamURL"] = v.notificationsStreamURL; 
    j["notificationsStreamGroupSlug"] = v.notificationsStreamGroupSlug; 
    j["notificationsAssetMagickURL"] = v.notificationsAssetMagickURL; 
    j["useServiceEndpointV2"] = v.useServiceEndpointV2; 
    j["notificationsServiceEndpointV2"] = v.notificationsServiceEndpointV2; 
    j["notificationsShortPollMinutes"] = v.notificationsShortPollMinutes; 
    j["notificationsLongPollMinutes"] = v.notificationsLongPollMinutes; 
    j["beappFailureLongPollMinutes"] = v.beappFailureLongPollMinutes; 
  }
  inline void from_json(const json& j, LolEsportStreamNotificationsESportStreamNotificationsConfig& v) {
    v.notificationsEnabled = j.at("notificationsEnabled").get<bool>(); 
    v.notificationsServiceEndpoint = j.at("notificationsServiceEndpoint").get<std::string>(); 
    v.notificationsStreamURL = j.at("notificationsStreamURL").get<std::string>(); 
    v.notificationsStreamGroupSlug = j.at("notificationsStreamGroupSlug").get<std::string>(); 
    v.notificationsAssetMagickURL = j.at("notificationsAssetMagickURL").get<std::string>(); 
    v.useServiceEndpointV2 = j.at("useServiceEndpointV2").get<bool>(); 
    v.notificationsServiceEndpointV2 = j.at("notificationsServiceEndpointV2").get<std::string>(); 
    v.notificationsShortPollMinutes = j.at("notificationsShortPollMinutes").get<int64_t>(); 
    v.notificationsLongPollMinutes = j.at("notificationsLongPollMinutes").get<int64_t>(); 
    v.beappFailureLongPollMinutes = j.at("beappFailureLongPollMinutes").get<int64_t>(); 
  }
}