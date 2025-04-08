select c.id, c.GENOTYPE, p.GENOTYPE as PARENT_GENOTYPE
from ECOLI_DATA as c, ECOLI_DATA as p
where c.GENOTYPE & p.GENOTYPE = p.GENOTYPE and c.PARENT_ID=p.id
order by c.id asc;