#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/basicOperatingSystemInfo.hpp>

namespace leagueapi {
  struct basicSystemInfo { /*User Experience Settings System Information*/ 
    uint32_t physicalProcessorCores;/**/
    uint32_t processorSpeed;/**/
    uint64_t physicalMemory;/**/
    basicOperatingSystemInfo operatingSystem;/**/
  };
  static void to_json(json& j, const basicSystemInfo& v) { 
    j["physicalProcessorCores"] = v.physicalProcessorCores;
    j["processorSpeed"] = v.processorSpeed;
    j["physicalMemory"] = v.physicalMemory;
    j["operatingSystem"] = v.operatingSystem;
  }
  static void from_json(const json& j, basicSystemInfo& v) { 
    v.physicalProcessorCores = j.at("physicalProcessorCores").get<uint32_t>(); 
    v.processorSpeed = j.at("processorSpeed").get<uint32_t>(); 
    v.physicalMemory = j.at("physicalMemory").get<uint64_t>(); 
    v.operatingSystem = j.at("operatingSystem").get<basicOperatingSystemInfo>(); 
  }
} 