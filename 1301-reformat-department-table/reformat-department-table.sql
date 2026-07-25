# Write your MySQL query statement below
select id , max(if(month='jan',revenue,null))as jan_revenue,
            max(if(month='feb',revenue,NULL))as feb_revenue,
            max(if(month='mar',revenue,NULL))as mar_revenue,
            max(if(month='apr',revenue,NULL))as apr_revenue,
            max(if(month='may',revenue,NULL))as may_revenue,
            max(if(month='jun',revenue,NULL))as jun_revenue,
            max(if(month='jul',revenue,NULL))as jul_revenue,
            max(if(month='aug',revenue,NULL))as aug_revenue,
            max(if(month='sep',revenue,NULL))as sep_revenue,
            max(if(month='oct',revenue,NULL))as oct_revenue,
            max(if(month='nov',revenue,NULL))as nov_revenue,
            max(if(month='dec',revenue,NULL))as dec_revenue
FROM Department
group by id order by id;