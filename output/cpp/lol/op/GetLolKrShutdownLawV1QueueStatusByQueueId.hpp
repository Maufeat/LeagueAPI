#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolKrShutdownLawQueueShutdownStatus.hpp>
namespace lol {
  Result<LolKrShutdownLawQueueShutdownStatus> GetLolKrShutdownLawV1QueueStatusByQueueId(const LeagueClient& _client, const int32_t& queue_id)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-kr-shutdown-law/v1/queue-status/"+to_string(queue_id)+"?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}